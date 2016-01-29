<?php
/**
 * @file
 * field.entityform.field_buffet.or_amento_e_contato.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        0 => 'Somente churrasco',
        1 => 'Churrasco com buffet',
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
            'field_data_field_buffet' => array(
              'value' => 'field_buffet_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_buffet' => array(
              'value' => 'field_buffet_value',
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
    'field_name' => 'field_buffet',
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
    'label' => 'Com ou sem buffet?',
    'widget' => array(
      'weight' => '2',
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
        'weight' => 4,
      ),
    ),
    'required' => 0,
    'description' => 'Opções do buffet estão abertas a negociação.',
    'default_value' => array(
      0 => array(
        'value' => '0',
      ),
    ),
    'field_name' => 'field_buffet',
    'entity_type' => 'entityform',
    'bundle' => 'or_amento_e_contato',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'entityform_type.or_amento_e_contato' => 'entityform_type.or_amento_e_contato',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'list',
  2 => 'options',
);
