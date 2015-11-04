<?php
/**
 * @file
 * ds_layout_settings.node_page_default.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'node|page|default';
$ds_layout->entity_type = 'node';
$ds_layout->bundle = 'page';
$ds_layout->view_mode = 'default';
$ds_layout->layout = 'ds_1col';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'title',
      1 => 'body',
    ),
  ),
  'fields' => array(
    'title' => 'ds_content',
    'body' => 'ds_content',
  ),
  'classes' => array(),
  'wrappers' => array(
    'ds_content' => 'div',
  ),
  'layout_wrapper' => 'div',
  'layout_attributes' => '',
  'layout_attributes_merge' => 1,
  'layout_link_attribute' => '',
  'layout_link_custom' => '',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
