<?php
/**
 * @file
 * content_fusion.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function content_fusion_user_default_roles() {
  $roles = array();

  // Exported role: Approved Commenter
  $roles['Approved Commenter'] = array(
    'name' => 'Approved Commenter',
    'weight' => '5',
  );

  // Exported role: Author
  $roles['Author'] = array(
    'name' => 'Author',
    'weight' => '4',
  );

  // Exported role: Editor
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => '3',
  );

  return $roles;
}
