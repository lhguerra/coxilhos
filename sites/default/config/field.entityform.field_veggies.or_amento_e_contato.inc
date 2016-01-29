<?php
/**
 * @file
 * field.entityform.field_veggies.or_amento_e_contato.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        0 => 'Não',
        1 => 'Sim',
      ),
      'allowed_values_function' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_veggies' => array(
              'value' => 'field_veggies_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_veggies' => array(
              'value' => 'field_veggies_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'field_name' => 'field_veggies',
    'type' => 'list_boolean',
    'module' => 'list',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Haverá Vegetarianos?',
    'widget' => array(
      'weight' => '3',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'list_default',
        'settings' => array(),
        'module' => 'list',
        'weight' => 3,
      ),
    ),
    'required' => 0,
    'description' => 'Se devemos contemplar opções vegetarianas no churrasco.',
    'default_value' => array(
      0 => array(
        'value' => '0',
      ),
    ),
    'field_name' => 'field_veggies',
    'entity_type' => 'entityform',
    'bundle' => 'or_amento_e_contato',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'list',
  2 => 'options',
);
