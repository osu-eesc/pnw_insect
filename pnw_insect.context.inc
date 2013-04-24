<?php
/**
 * @file
 * pnw_insect.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pnw_insect_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sidebar_first';
  $context->description = 'Sidebar first menus and blocks';
  $context->tag = 'Menu';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~admin*' => '~admin*',
        '~admin/*' => '~admin/*',
        '~node/*/edit' => '~node/*/edit',
        '~node/*/add' => '~node/*/add',
        '~batch*' => '~batch*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-71d8de985c771f73105619ac94d1d3da' => array(
          'module' => 'views',
          'delta' => '71d8de985c771f73105619ac94d1d3da',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'menu_block-pnw_insect-12' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-12',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'menu_block-pnw_insect-15' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-15',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'menu_block-pnw_insect-14' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-14',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'menu_block-pnw_insect-16' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-16',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'menu_block-pnw_insect-19' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-19',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'menu_block-pnw_insect-13' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-13',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'menu_block-pnw_insect-18' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-18',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'menu_block-pnw_insect-17' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-17',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
        'menu_block-pnw_insect-8' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-8',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'menu_block-pnw_insect-5' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-5',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
        'menu_block-pnw_insect-3' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-3',
          'region' => 'sidebar_first',
          'weight' => '2',
        ),
        'menu_block-pnw_insect-6' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-6',
          'region' => 'sidebar_first',
          'weight' => '3',
        ),
        'menu_block-pnw_insect-7' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-7',
          'region' => 'sidebar_first',
          'weight' => '4',
        ),
        'menu_block-pnw_insect-10' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-10',
          'region' => 'sidebar_first',
          'weight' => '5',
        ),
        'menu_block-pnw_insect-9' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-9',
          'region' => 'sidebar_first',
          'weight' => '6',
        ),
        'menu_block-pnw_insect-11' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-11',
          'region' => 'sidebar_first',
          'weight' => '7',
        ),
        'views-related_links-related_links' => array(
          'module' => 'views',
          'delta' => 'related_links-related_links',
          'region' => 'sidebar_first',
          'weight' => '8',
        ),
        'views-ce425b88ce94d9fe1a9ce9c03c515e04' => array(
          'module' => 'views',
          'delta' => 'ce425b88ce94d9fe1a9ce9c03c515e04',
          'region' => 'sidebar_first',
          'weight' => '9',
        ),
        'system-management' => array(
          'module' => 'system',
          'delta' => 'management',
          'region' => 'sidebar_first',
          'weight' => '10',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'sidebar_first',
          'weight' => '10',
        ),
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'sidebar_first',
          'weight' => '10',
        ),
        'views-de9dbf4a70df215c4657b4bc8c01f159' => array(
          'module' => 'views',
          'delta' => 'de9dbf4a70df215c4657b4bc8c01f159',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'sharethis-sharethis_block' => array(
          'module' => 'sharethis',
          'delta' => 'sharethis_block',
          'region' => 'help',
          'weight' => '-9',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'help',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Menu');
  t('Sidebar first menus and blocks');
  $export['sidebar_first'] = $context;

  return $export;
}
