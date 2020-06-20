<?php

function questionnaire_results_page($node) {
  $output = array();

  $results = questionnaire_result_set_load_multiple(FALSE, ['nid' => $node->nid]);

  $header = array(
    'User',
    'Score',
  );

  $rows = array();

  if (count($results)) {
    $questions = field_get_items('node', $node, 'field_questions');
    $questionCount = count($questions);
    foreach ($results as $r) {
      $taker = user_load($r->uid);
      $correctCount = _questionnaire_get_correct_count(node_load($r->nid), $r->answers);
      $row = array(
        $taker->name,
        "$correctCount / $questionCount (".(round($correctCount/$questionCount*100, 2))."%)"
      );
      $rows[] = $row;
    }

    $output['score_table'] = array(
      '#theme' => 'table',
      '#header' => $header,
      '#rows' => $rows
    );
  }
  else {
    $output['no_takers'] = array(
      '#markup' => t('No one has taken this questionnaire yet!')
    );
  }

  return $output;
}
