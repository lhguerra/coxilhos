<?php
/**
 * @file
 * coxilhos_contact_form.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function coxilhos_contact_form_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-or_amento_e_contato-field_buffet'.
  $field_instances['entityform-or_amento_e_contato-field_buffet'] = array(
    'bundle' => 'or_amento_e_contato',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Opções do buffet estão abertas a negociação.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_buffet',
    'label' => 'Com ou sem buffet?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-or_amento_e_contato-field_email'.
  $field_instances['entityform-or_amento_e_contato-field_email'] = array(
    'bundle' => 'or_amento_e_contato',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Email ou telefone que usaremos para retornar o contato.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email ou telefone',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-or_amento_e_contato-field_message'.
  $field_instances['entityform-or_amento_e_contato-field_message'] = array(
    'bundle' => 'or_amento_e_contato',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Número de pessoas, data, local e informações adicionais.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_message',
    'label' => 'Mensagem',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-or_amento_e_contato-field_name'.
  $field_instances['entityform-or_amento_e_contato-field_name'] = array(
    'bundle' => 'or_amento_e_contato',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Seu nome.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_name',
    'label' => 'Nome',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'entityform-or_amento_e_contato-field_veggies'.
  $field_instances['entityform-or_amento_e_contato-field_veggies'] = array(
    'bundle' => 'or_amento_e_contato',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Se devemos contemplar opções vegetarianas no churrasco.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_veggies',
    'label' => 'Haverá Vegetarianos?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Com ou sem buffet?');
  t('Email ou telefone');
  t('Email ou telefone que usaremos para retornar o contato.');
  t('Haverá Vegetarianos?');
  t('Mensagem');
  t('Nome');
  t('Número de pessoas, data, local e informações adicionais.');
  t('Opções do buffet estão abertas a negociação.');
  t('Se devemos contemplar opções vegetarianas no churrasco.');
  t('Seu nome.');

  return $field_instances;
}
