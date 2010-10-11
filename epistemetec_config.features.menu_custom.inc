<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function epistemetec_config_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-footer
  $menus['menu-menu-footer'] = array(
    'menu_name' => 'menu-menu-footer',
    'title' => 'Utili',
    'description' => 'Menù per pagine di varia utilità.',
  );
  // Exported menu: menu-principale
  $menus['menu-principale'] = array(
    'menu_name' => 'menu-principale',
    'title' => 'E-pistemetec',
    'description' => 'Menù principale per il progetto E-pistemetec.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('E-pistemetec');
  t('Menù per pagine di varia utilità.');
  t('Menù principale per il progetto E-pistemetec.');
  t('Utili');


  return $menus;
}
