<?php

/**
 * @file
 * questionnaire.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function questionnaire_user_default_roles() {
  $roles = array();

  // Exported role: supervisor.
  $roles['supervisor'] = array(
    'name' => 'supervisor',
    'weight' => 3,
  );

  return $roles;
}
