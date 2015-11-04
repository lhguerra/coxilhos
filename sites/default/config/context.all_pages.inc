<?php
/**
 * @file
 * context.all_pages.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'all_pages';
$context->description = '';
$context->tag = '';
$context->conditions = array(
  'path' => array(
    'values' => array(
      '*' => '*',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'system-main-menu' => array(
        'module' => 'system',
        'delta' => 'main-menu',
        'region' => 'header',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 1;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
