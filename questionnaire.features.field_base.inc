<?php

/**
 * @file
 * questionnaire.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function questionnaire_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_questions'.
  $field_bases['field_questions'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_questions',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'questionnaire',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_question',
  );

  // Exported field_base: 'field_supervisors'.
  $field_bases['field_supervisors'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_supervisors',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'supervisor_reference',
          'view_name' => 'questionnaire_supervisors',
        ),
      ),
      'target_type' => 'user',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
