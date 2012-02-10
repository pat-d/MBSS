Fusion Slideshow
================

The Fusion Slideshow feature can be used to create a large, medium, and small slideshow block using Views Slideshow as well as a slideshow page at example.com/slideshow. Further information on configuring a slideshow can be found at http://drupal.org/node/755010.


Requirements
============

Features 1.x
Link 1.x
Views 3.x
Ctools 1.x (required by Views)
Views Slideshow 3.x
Libraries API 1.x (required by Views Slideshow)
jQuery cycle plugin (http://jquery.malsup.com/cycle/)


Installation
============

1. Download and install all of the required modules for this feature - Views 3, Ctools, Features, Libraries, Link, Views Slideshow. 

2. Download jquery.cycle.all.min.js or jquery.cycle.all.js at http://malsup.com/jquery/cycle. Create a directory in sites/all/libraries called jquery.cycle, and then copy jquery.cycle.all.min.js or jquery.cycle.all.js into it. 

3. Copy the fusion_slideshow folder to /sites/all/modules on your Drupal server.

4. Visit the Modules page (admin/modules/list), locate the checkbox for "Fusion Slideshow" and click "save configuration".

5. Once the feature is installed, you'll have a new content type on your site, "Fusion Slideshow Slide," and 3 new blocks on your block configuration page, "Large Slideshow," "Medium Slideshow," and "Small Slideshow." You can create new slideshow nodes

6. Create new slideshow content and place any of the blocks into any region of your site and your slideshow is ready to go!

If you want to use the Large Slideshow as the page content on homepage of your site (like we've done on the demo site at http://cleancommerce.fusiondrupalthemes.com), simply visit the Side Information configuration page (/admin/config/system/site-information) and change the "default front page" path to "slideshow".

Fusion theme-specific styling
=============================

This version of Fusion Slideshow is packaged with styling for the following Fusion Premium Themes:

1. Fusion CleanCommerce - http://cleancommerce.fusiondrupalthemes.com


Authors/maintainers
===================

Original Author:

Sheena Donnelly
http://drupal.org/user/380305


Support
=======

You can get help in our forums at http://fusiondrupalthemes.com/forum/using-fusion and by filing an issue at 
http://fusiondrupalthemes.com/node/add/project-issue