#!/usr/bin/env python
#-*- coding: utf-8 -*-

import roslib
import rospy

from kivy.app import App

class DesignApp(App):
  def __init__(self, **kwargs):
    super(DesignApp, self).__init__(**kwargs)
    self.title = 'viewer'

if __name__ == '__main__':
   DesignApp().run()
