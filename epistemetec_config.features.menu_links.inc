<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function epistemetec_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-principale:<front>
  $menu_links['menu-principale:<front>'] = array(
    'menu_name' => 'menu-principale',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => 'Pagina home',
      ),
      'langcode' => 'it',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-principale:user
  $menu_links['menu-principale:user'] = array(
    'menu_name' => 'menu-principale',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Log in',
    'options' => array(
      'attributes' => array(
        'title' => 'Log in to the Digital Library',
      ),
      'langcode' => 'en',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('Log in');


  return $menu_links;
}
