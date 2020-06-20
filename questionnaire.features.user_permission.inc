<?php

/**
 * @file
 * questionnaire.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function questionnaire_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create questionnaire content'.
  $permissions['create questionnaire content'] = array(
    'name' => 'create questionnaire content',
    'roles' => array(
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any questionnaire content'.
  $permissions['delete any questionnaire content'] = array(
    'name' => 'delete any questionnaire content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own questionnaire content'.
  $permissions['delete own questionnaire content'] = array(
    'name' => 'delete own questionnaire content',
    'roles' => array(
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any questionnaire content'.
  $permissions['edit any questionnaire content'] = array(
    'name' => 'edit any questionnaire content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own questionnaire content'.
  $permissions['edit own questionnaire content'] = array(
    'name' => 'edit own questionnaire content',
    'roles' => array(
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
