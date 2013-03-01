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
        '~admin' => '~admin',
        '~admin/*' => '~admin/*',
        '~node/*/edit' => '~node/*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_first',
          'weight' => '-30',
        ),
        'menu_block-pnw_insect-15' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-15',
          'region' => 'sidebar_first',
          'weight' => '-29',
        ),
        'menu_block-pnw_insect-14' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-14',
          'region' => 'sidebar_first',
          'weight' => '-28',
        ),
        'menu_block-pnw_insect-16' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-16',
          'region' => 'sidebar_first',
          'weight' => '-27',
        ),
        'menu_block-pnw_insect-19' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-19',
          'region' => 'sidebar_first',
          'weight' => '-26',
        ),
        'menu_block-pnw_insect-13' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-13',
          'region' => 'sidebar_first',
          'weight' => '-25',
        ),
        'menu_block-pnw_insect-18' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-18',
          'region' => 'sidebar_first',
          'weight' => '-24',
        ),
        'menu_block-pnw_insect-17' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-17',
          'region' => 'sidebar_first',
          'weight' => '-23',
        ),
        'menu_block-pnw_insect-8' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-8',
          'region' => 'sidebar_first',
          'weight' => '-22',
        ),
        'menu_block-pnw_insect-5' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-5',
          'region' => 'sidebar_first',
          'weight' => '-21',
        ),
        'menu_block-pnw_insect-3' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-3',
          'region' => 'sidebar_first',
          'weight' => '-20',
        ),
        'menu_block-pnw_insect-6' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-6',
          'region' => 'sidebar_first',
          'weight' => '-19',
        ),
        'menu_block-pnw_insect-7' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-7',
          'region' => 'sidebar_first',
          'weight' => '-18',
        ),
        'menu_block-pnw_insect-10' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-10',
          'region' => 'sidebar_first',
          'weight' => '-17',
        ),
        'menu_block-pnw_insect-9' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-9',
          'region' => 'sidebar_first',
          'weight' => '-16',
        ),
        'menu_block-pnw_insect-11' => array(
          'module' => 'menu_block',
          'delta' => 'pnw_insect-11',
          'region' => 'sidebar_first',
          'weight' => '-15',
        ),
        'views-ce425b88ce94d9fe1a9ce9c03c515e04' => array(
          'module' => 'views',
          'delta' => 'ce425b88ce94d9fe1a9ce9c03c515e04',
          'region' => 'sidebar_first',
          'weight' => '-14',
        ),
        'views-related_links-related_links' => array(
          'module' => 'views',
          'delta' => 'related_links-related_links',
          'region' => 'sidebar_first',
          'weight' => '-13',
        ),
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'sidebar_first',
          'weight' => '-12',
        ),
        'system-management' => array(
          'module' => 'system',
          'delta' => 'management',
          'region' => 'sidebar_first',
          'weight' => '-11',
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
