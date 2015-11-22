<?php
/**
 * @file
 * content_type.steaks.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'steaks',
  'name' => 'Carnes',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__steaks' => 'variable.field_bundle_settings_node__steaks',
  'variable.node_options_steaks' => 'variable.node_options_steaks',
  'variable.node_preview_steaks' => 'variable.node_preview_steaks',
  'variable.node_submitted_steaks' => 'variable.node_submitted_steaks',
  'variable.comment_default_per_page_steaks' => 'variable.comment_default_per_page_steaks',
  'variable.comment_form_location_steaks' => 'variable.comment_form_location_steaks',
  'variable.comment_preview_steaks' => 'variable.comment_preview_steaks',
  'variable.comment_subject_field_steaks' => 'variable.comment_subject_field_steaks',
);

$optional = array(
  'field.node.body.steaks' => 'field.node.body.steaks',
  'field.node.field_image.steaks' => 'field.node.field_image.steaks',
  'permission.create_steaks_content' => 'permission.create_steaks_content',
  'permission.edit_own_steaks_content' => 'permission.edit_own_steaks_content',
  'permission.edit_any_steaks_content' => 'permission.edit_any_steaks_content',
  'permission.delete_own_steaks_content' => 'permission.delete_own_steaks_content',
  'permission.delete_any_steaks_content' => 'permission.delete_any_steaks_content',
);

$modules = array(
  0 => 'node',
);
