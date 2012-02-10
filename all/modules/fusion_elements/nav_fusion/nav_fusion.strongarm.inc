<?php
/**
 * @file
 * nav_fusion.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nav_fusion_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  return $export;
}
