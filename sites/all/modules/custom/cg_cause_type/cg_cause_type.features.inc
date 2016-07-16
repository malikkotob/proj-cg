<?php
/**
 * @file
 * cg_cause_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function cg_cause_type_node_info() {
  $items = array(
    'cause' => array(
      'name' => t('Cause'),
      'base' => 'node_content',
      'description' => t('Causes organizations support as part of fulfilling their mission.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
