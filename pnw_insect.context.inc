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
          'weight' => '-10',
        ),
        'menu_block-12' => array(
          'module' => 'menu_block',
          'delta' => '12',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'menu_block-5' => array(
          'module' => 'menu_block',
          'delta' => '5',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'menu_block-6' => array(
          'module' => 'menu_block',
          'delta' => '6',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'menu_block-9' => array(
          'module' => 'menu_block',
          'delta' => '9',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'menu_block-7' => array(
          'module' => 'menu_block',
          'delta' => '7',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'menu_block-10' => array(
          'module' => 'menu_block',
          'delta' => '10',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'menu_block-11' => array(
          'module' => 'menu_block',
          'delta' => '11',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'menu_block-15' => array(
          'module' => 'menu_block',
          'delta' => '15',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
        'menu_block-17' => array(
          'module' => 'menu_block',
          'delta' => '17',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'menu_block-18' => array(
          'module' => 'menu_block',
          'delta' => '18',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
        'menu_block-19' => array(
          'module' => 'menu_block',
          'delta' => '19',
          'region' => 'sidebar_first',
          'weight' => '2',
        ),
        'menu_block-16' => array(
          'module' => 'menu_block',
          'delta' => '16',
          'region' => 'sidebar_first',
          'weight' => '3',
        ),
        'menu_block-8' => array(
          'module' => 'menu_block',
          'delta' => '8',
          'region' => 'sidebar_first',
          'weight' => '4',
        ),
        'menu_block-13' => array(
          'module' => 'menu_block',
          'delta' => '13',
          'region' => 'sidebar_first',
          'weight' => '5',
        ),
        'menu_block-14' => array(
          'module' => 'menu_block',
          'delta' => '14',
          'region' => 'sidebar_first',
          'weight' => '6',
        ),
        'views-related_links-related_links' => array(
          'module' => 'views',
          'delta' => 'related_links-related_links',
          'region' => 'sidebar_first',
          'weight' => '7',
        ),
        'views-ce425b88ce94d9fe1a9ce9c03c515e04' => array(
          'module' => 'views',
          'delta' => 'ce425b88ce94d9fe1a9ce9c03c515e04',
          'region' => 'sidebar_first',
          'weight' => '8',
        ),
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'sidebar_first',
          'weight' => '9',
        ),
        'system-management' => array(
          'module' => 'system',
          'delta' => 'management',
          'region' => 'sidebar_first',
          'weight' => '10',
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
