<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function epistemetec_config_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'main_block';
  $context->description = 'show block for all site';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'locale-0' => array(
          'module' => 'locale',
          'delta' => 0,
          'region' => 'header_top',
          'weight' => 0,
        ),
        'logintoboggan-0' => array(
          'module' => 'logintoboggan',
          'delta' => 0,
          'region' => 'header_top',
          'weight' => 1,
        ),
        'menu-menu-principale' => array(
          'module' => 'menu',
          'delta' => 'menu-principale',
          'region' => 'header_top',
          'weight' => 2,
        ),
        'user-0' => array(
          'module' => 'user',
          'delta' => 0,
          'region' => 'preface_top',
          'weight' => 0,
        ),
        'menu-menu-menu-footer' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-footer',
          'region' => 'footer',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('show block for all site');
  t('theme');

  $export['main_block'] = $context;
  return $export;
}
