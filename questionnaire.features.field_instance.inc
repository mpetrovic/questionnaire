<?php

/**
 * @file
 * questionnaire.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function questionnaire_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-questionnaire-field_questions'.
  $field_instances['node-questionnaire-field_questions'] = array(
    'bundle' => 'questionnaire',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'questionnaire_form' => array(
        'label' => 'hidden',
        'module' => 'questionnaire',
        'settings' => array(),
        'type' => 'questionnaire_question_render',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_questions',
    'label' => 'Questions',
    'required' => 1,
    'settings' => array(
      'complexity' => '',
      'correct_answer' => '',
      'question' => '',
      'user_register_form' => FALSE,
      'wrong_answers' => '',
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'questionnaire',
      'settings' => array(),
      'type' => 'questionnaire_questions_form',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-questionnaire-field_supervisors'.
  $field_instances['node-questionnaire-field_supervisors'] = array(
    'bundle' => 'questionnaire',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'questionnaire_form' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_supervisors',
    'label' => 'supervisors',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Questions');
  t('supervisors');

  return $field_instances;
}
