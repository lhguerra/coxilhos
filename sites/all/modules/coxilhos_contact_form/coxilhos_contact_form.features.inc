<?php
/**
 * @file
 * coxilhos_contact_form.features.inc
 */

/**
 * Implements hook_default_entityform_type().
 */
function coxilhos_contact_form_default_entityform_type() {
  $items = array();
  $items['or_amento_e_contato'] = entity_import('entityform_type', '{
    "type" : "or_amento_e_contato",
    "label" : "Or\\u00e7amento e Contato",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "Enviar",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Formul\\u00e1rio enviado com sucesso!",
      "submission_text" : {
        "value" : "Sua mensagem foi enviada.\\r\\nEm breve retornaremos o contato.",
        "format" : "filtered_html"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3" },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "Entre em contato para pedir um or\\u00e7amento ou tirar suas d\\u00favidas.\\r\\nUse o formul\\u00e1rio abaixo ou os telefones \\u003Cbr class=\\u0027hidden\\u0027\\u003E 48 9933 0349 \\/ 48 8834 2412.",
        "format" : "full_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/or-amento-e-contato",
        "alias" : "contato",
        "language" : "und"
      }
    }
  }');
  return $items;
}
