<?php

/**
 * @file
 * questionnaire.features.inc
 */

/**
 * Implements hook_views_api().
 */
function questionnaire_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function questionnaire_node_info() {
  $items = array(
    'questionnaire' => array(
      'name' => t('Questionnaire'),
      'base' => 'node_content',
      'description' => t('A list of questions to be answered by users'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
