<?php
/**
 * @file
 * image_style.square300.inc
 */

$api = '2.0.0';

$data = array(
  'effects' => array(
    0 => array(
      'data' => array(
        'height' => '300',
        'width' => '300',
      ),
      'dimensions callback' => 'image_resize_dimensions',
      'effect callback' => 'image_scale_and_crop_effect',
      'form callback' => 'image_resize_form',
      'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
      'label' => 'Scale and crop',
      'module' => 'image',
      'name' => 'image_scale_and_crop',
      'summary theme' => 'image_resize_summary',
      'weight' => '1',
    ),
  ),
  'label' => 'square300',
  'name' => 'square300',
  'storage' => 1,
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'image',
);
