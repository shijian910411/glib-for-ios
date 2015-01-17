import sys
import gdb

# Update module path.
dir_ = '/Users/rahul/Desktop/glib_for_ios/dependencies/share/glib-2.0/gdb'
if not dir_ in sys.path:
    sys.path.insert(0, dir_)

from glib import register
register (gdb.current_objfile ())
