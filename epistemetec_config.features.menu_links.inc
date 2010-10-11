<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function epistemetec_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-footer:node/22
  $menu_links['menu-menu-footer:node/22'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Accessibilità',
    'options' => array(
      'attributes' => array(
        'title' => 'Accessibilità',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-menu-footer:node/24
  $menu_links['menu-menu-footer:node/24'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Faq',
    'options' => array(
      'attributes' => array(
        'title' => 'Faq',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-menu-footer:node/25
  $menu_links['menu-menu-footer:node/25'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'Guestbook',
    'options' => array(
      'attributes' => array(
        'title' => 'Guestbook',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-menu-footer:node/26
  $menu_links['menu-menu-footer:node/26'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'Contatti',
    'options' => array(
      'attributes' => array(
        'title' => 'Contatti',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-menu-footer:node/27
  $menu_links['menu-menu-footer:node/27'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Note legali',
    'options' => array(
      'attributes' => array(
        'title' => 'Note legali',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
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
  // Exported menu link: menu-principale:fedora/repository
  $menu_links['menu-principale:fedora/repository'] = array(
    'menu_name' => 'menu-principale',
    'link_path' => 'fedora/repository',
    'router_path' => 'fedora/repository',
    'link_title' => 'Digital Library',
    'options' => array(
      'attributes' => array(
        'title' => 'Accesso alal Digital Library di E-pistemetec',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-principale:http://atrium.e-pistemetec.net
  $menu_links['menu-principale:http://atrium.e-pistemetec.net'] = array(
    'menu_name' => 'menu-principale',
    'link_path' => 'http://atrium.e-pistemetec.net',
    'router_path' => '',
    'link_title' => 'E-Atrium',
    'options' => array(
      'attributes' => array(
        'title' => 'Collaboration environment for E-pistemetec',
      ),
      'langcode' => 'en',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/11',
  );
  // Exported menu link: menu-principale:node/10
  $menu_links['menu-principale:node/10'] = array(
    'menu_name' => 'menu-principale',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Strumenti',
    'options' => array(
      'attributes' => array(
        'title' => 'Strumenti del progetto E-pistemetec',
      ),
      'langcode' => 'it',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: menu-principale:node/16
  $menu_links['menu-principale:node/16'] = array(
    'menu_name' => 'menu-principale',
    'link_path' => 'node/16',
    'router_path' => 'node/%',
    'link_title' => 'Progetto',
    'options' => array(
      'attributes' => array(
        'title' => 'Progetto',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-principale:node/17
  $menu_links['menu-principale:node/17'] = array(
    'menu_name' => 'menu-principale',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Programma',
    'options' => array(
      'attributes' => array(
        'title' => 'Programma',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/16',
  );
  // Exported menu link: menu-principale:node/18
  $menu_links['menu-principale:node/18'] = array(
    'menu_name' => 'menu-principale',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'Obiettivi',
    'options' => array(
      'attributes' => array(
        'title' => 'Obiettivi',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/16',
  );
  // Exported menu link: menu-principale:node/19
  $menu_links['menu-principale:node/19'] = array(
    'menu_name' => 'menu-principale',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Partner',
    'options' => array(
      'attributes' => array(
        'title' => 'I Partner del progetto',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/16',
  );
  // Exported menu link: menu-principale:node/20
  $menu_links['menu-principale:node/20'] = array(
    'menu_name' => 'menu-principale',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Community',
    'options' => array(
      'attributes' => array(
        'title' => 'Community',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-principale:node/23
  $menu_links['menu-principale:node/23'] = array(
    'menu_name' => 'menu-principale',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Ufficio Stampa',
    'options' => array(
      'attributes' => array(
        'title' => 'Ufficio Stampa',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
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
  t('Accessibilità');
  t('Community');
  t('Contatti');
  t('Digital Library');
  t('E-Atrium');
  t('Faq');
  t('Guestbook');
  t('Home');
  t('Log in');
  t('Note legali');
  t('Obiettivi');
  t('Partner');
  t('Progetto');
  t('Programma');
  t('Strumenti');
  t('Ufficio Stampa');


  return $menu_links;
}
