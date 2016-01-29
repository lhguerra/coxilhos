<?php
/**
 * @file
 * permission.delete_any_steaks_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any steaks content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.steaks' => 'content_type.steaks',
);

$optional = array();

$modules = array(
  0 => 'node',
);
