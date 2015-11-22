<?php
/**
 * @file
 * permission.edit_own_steaks_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own steaks content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.steaks' => 'content_type.steaks',
);

$optional = array();

$modules = array(
  0 => 'node',
);
