/*
 * Generated by gdbus-codegen 2.42.1. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __GDBUS_DAEMON_GENERATED_H__
#define __GDBUS_DAEMON_GENERATED_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.DBus */

#define _G_TYPE_FREEDESKTOP_DBUS (_g_freedesktop_dbus_get_type ())
#define _G_FREEDESKTOP_DBUS(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), _G_TYPE_FREEDESKTOP_DBUS, _GFreedesktopDBus))
#define _G_IS_FREEDESKTOP_DBUS(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), _G_TYPE_FREEDESKTOP_DBUS))
#define _G_FREEDESKTOP_DBUS_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), _G_TYPE_FREEDESKTOP_DBUS, _GFreedesktopDBusIface))

struct __GFreedesktopDBus;
typedef struct __GFreedesktopDBus _GFreedesktopDBus;
typedef struct __GFreedesktopDBusIface _GFreedesktopDBusIface;

struct __GFreedesktopDBusIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_add_match) (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_rule);

  gboolean (*handle_get_connection_selinux_security_context) (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_name);

  gboolean (*handle_get_connection_unix_process_id) (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_name);

  gboolean (*handle_get_connection_unix_user) (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_name);

  gboolean (*handle_get_id) (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_name_owner) (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_name);

  gboolean (*handle_hello) (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_list_activatable_names) (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_list_names) (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_list_queued_owners) (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_name);

  gboolean (*handle_name_has_owner) (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_name);

  gboolean (*handle_release_name) (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_name);

  gboolean (*handle_reload_config) (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_remove_match) (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_rule);

  gboolean (*handle_request_name) (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_name,
    guint arg_flags);

  gboolean (*handle_start_service_by_name) (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_name,
    guint arg_flags);

  gboolean (*handle_update_activation_environment) (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_environment);

  void (*name_acquired) (
    _GFreedesktopDBus *object,
    const gchar *arg_name);

  void (*name_lost) (
    _GFreedesktopDBus *object,
    const gchar *arg_name);

  void (*name_owner_changed) (
    _GFreedesktopDBus *object,
    const gchar *arg_name,
    const gchar *arg_old_owner,
    const gchar *arg_new_owner);

};

GType _g_freedesktop_dbus_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *_g_freedesktop_dbus_interface_info (void);
guint _g_freedesktop_dbus_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void _g_freedesktop_dbus_complete_hello (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *assigned_name);

void _g_freedesktop_dbus_complete_request_name (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    guint value);

void _g_freedesktop_dbus_complete_release_name (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    guint value);

void _g_freedesktop_dbus_complete_start_service_by_name (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    guint value);

void _g_freedesktop_dbus_complete_name_has_owner (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    gboolean has_owner);

void _g_freedesktop_dbus_complete_list_names (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *names);

void _g_freedesktop_dbus_complete_list_activatable_names (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *activatable_names);

void _g_freedesktop_dbus_complete_add_match (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation);

void _g_freedesktop_dbus_complete_remove_match (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation);

void _g_freedesktop_dbus_complete_get_name_owner (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *unique_name);

void _g_freedesktop_dbus_complete_list_queued_owners (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *queued_owners);

void _g_freedesktop_dbus_complete_get_connection_unix_user (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    guint uid);

void _g_freedesktop_dbus_complete_get_connection_unix_process_id (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    guint pid);

void _g_freedesktop_dbus_complete_get_connection_selinux_security_context (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *security_context);

void _g_freedesktop_dbus_complete_update_activation_environment (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation);

void _g_freedesktop_dbus_complete_reload_config (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation);

void _g_freedesktop_dbus_complete_get_id (
    _GFreedesktopDBus *object,
    GDBusMethodInvocation *invocation,
    const gchar *unique_id);



/* D-Bus signal emissions functions: */
void _g_freedesktop_dbus_emit_name_owner_changed (
    _GFreedesktopDBus *object,
    const gchar *arg_name,
    const gchar *arg_old_owner,
    const gchar *arg_new_owner);

void _g_freedesktop_dbus_emit_name_lost (
    _GFreedesktopDBus *object,
    const gchar *arg_name);

void _g_freedesktop_dbus_emit_name_acquired (
    _GFreedesktopDBus *object,
    const gchar *arg_name);



/* D-Bus method calls: */
void _g_freedesktop_dbus_call_hello (
    _GFreedesktopDBus *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _g_freedesktop_dbus_call_hello_finish (
    _GFreedesktopDBus *proxy,
    gchar **out_assigned_name,
    GAsyncResult *res,
    GError **error);

gboolean _g_freedesktop_dbus_call_hello_sync (
    _GFreedesktopDBus *proxy,
    gchar **out_assigned_name,
    GCancellable *cancellable,
    GError **error);

void _g_freedesktop_dbus_call_request_name (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    guint arg_flags,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _g_freedesktop_dbus_call_request_name_finish (
    _GFreedesktopDBus *proxy,
    guint *out_value,
    GAsyncResult *res,
    GError **error);

gboolean _g_freedesktop_dbus_call_request_name_sync (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    guint arg_flags,
    guint *out_value,
    GCancellable *cancellable,
    GError **error);

void _g_freedesktop_dbus_call_release_name (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _g_freedesktop_dbus_call_release_name_finish (
    _GFreedesktopDBus *proxy,
    guint *out_value,
    GAsyncResult *res,
    GError **error);

gboolean _g_freedesktop_dbus_call_release_name_sync (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    guint *out_value,
    GCancellable *cancellable,
    GError **error);

void _g_freedesktop_dbus_call_start_service_by_name (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    guint arg_flags,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _g_freedesktop_dbus_call_start_service_by_name_finish (
    _GFreedesktopDBus *proxy,
    guint *out_value,
    GAsyncResult *res,
    GError **error);

gboolean _g_freedesktop_dbus_call_start_service_by_name_sync (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    guint arg_flags,
    guint *out_value,
    GCancellable *cancellable,
    GError **error);

void _g_freedesktop_dbus_call_name_has_owner (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _g_freedesktop_dbus_call_name_has_owner_finish (
    _GFreedesktopDBus *proxy,
    gboolean *out_has_owner,
    GAsyncResult *res,
    GError **error);

gboolean _g_freedesktop_dbus_call_name_has_owner_sync (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    gboolean *out_has_owner,
    GCancellable *cancellable,
    GError **error);

void _g_freedesktop_dbus_call_list_names (
    _GFreedesktopDBus *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _g_freedesktop_dbus_call_list_names_finish (
    _GFreedesktopDBus *proxy,
    gchar ***out_names,
    GAsyncResult *res,
    GError **error);

gboolean _g_freedesktop_dbus_call_list_names_sync (
    _GFreedesktopDBus *proxy,
    gchar ***out_names,
    GCancellable *cancellable,
    GError **error);

void _g_freedesktop_dbus_call_list_activatable_names (
    _GFreedesktopDBus *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _g_freedesktop_dbus_call_list_activatable_names_finish (
    _GFreedesktopDBus *proxy,
    gchar ***out_activatable_names,
    GAsyncResult *res,
    GError **error);

gboolean _g_freedesktop_dbus_call_list_activatable_names_sync (
    _GFreedesktopDBus *proxy,
    gchar ***out_activatable_names,
    GCancellable *cancellable,
    GError **error);

void _g_freedesktop_dbus_call_add_match (
    _GFreedesktopDBus *proxy,
    const gchar *arg_rule,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _g_freedesktop_dbus_call_add_match_finish (
    _GFreedesktopDBus *proxy,
    GAsyncResult *res,
    GError **error);

gboolean _g_freedesktop_dbus_call_add_match_sync (
    _GFreedesktopDBus *proxy,
    const gchar *arg_rule,
    GCancellable *cancellable,
    GError **error);

void _g_freedesktop_dbus_call_remove_match (
    _GFreedesktopDBus *proxy,
    const gchar *arg_rule,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _g_freedesktop_dbus_call_remove_match_finish (
    _GFreedesktopDBus *proxy,
    GAsyncResult *res,
    GError **error);

gboolean _g_freedesktop_dbus_call_remove_match_sync (
    _GFreedesktopDBus *proxy,
    const gchar *arg_rule,
    GCancellable *cancellable,
    GError **error);

void _g_freedesktop_dbus_call_get_name_owner (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _g_freedesktop_dbus_call_get_name_owner_finish (
    _GFreedesktopDBus *proxy,
    gchar **out_unique_name,
    GAsyncResult *res,
    GError **error);

gboolean _g_freedesktop_dbus_call_get_name_owner_sync (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    gchar **out_unique_name,
    GCancellable *cancellable,
    GError **error);

void _g_freedesktop_dbus_call_list_queued_owners (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _g_freedesktop_dbus_call_list_queued_owners_finish (
    _GFreedesktopDBus *proxy,
    gchar ***out_queued_owners,
    GAsyncResult *res,
    GError **error);

gboolean _g_freedesktop_dbus_call_list_queued_owners_sync (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    gchar ***out_queued_owners,
    GCancellable *cancellable,
    GError **error);

void _g_freedesktop_dbus_call_get_connection_unix_user (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _g_freedesktop_dbus_call_get_connection_unix_user_finish (
    _GFreedesktopDBus *proxy,
    guint *out_uid,
    GAsyncResult *res,
    GError **error);

gboolean _g_freedesktop_dbus_call_get_connection_unix_user_sync (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    guint *out_uid,
    GCancellable *cancellable,
    GError **error);

void _g_freedesktop_dbus_call_get_connection_unix_process_id (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _g_freedesktop_dbus_call_get_connection_unix_process_id_finish (
    _GFreedesktopDBus *proxy,
    guint *out_pid,
    GAsyncResult *res,
    GError **error);

gboolean _g_freedesktop_dbus_call_get_connection_unix_process_id_sync (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    guint *out_pid,
    GCancellable *cancellable,
    GError **error);

void _g_freedesktop_dbus_call_get_connection_selinux_security_context (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _g_freedesktop_dbus_call_get_connection_selinux_security_context_finish (
    _GFreedesktopDBus *proxy,
    gchar **out_security_context,
    GAsyncResult *res,
    GError **error);

gboolean _g_freedesktop_dbus_call_get_connection_selinux_security_context_sync (
    _GFreedesktopDBus *proxy,
    const gchar *arg_name,
    gchar **out_security_context,
    GCancellable *cancellable,
    GError **error);

void _g_freedesktop_dbus_call_update_activation_environment (
    _GFreedesktopDBus *proxy,
    GVariant *arg_environment,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _g_freedesktop_dbus_call_update_activation_environment_finish (
    _GFreedesktopDBus *proxy,
    GAsyncResult *res,
    GError **error);

gboolean _g_freedesktop_dbus_call_update_activation_environment_sync (
    _GFreedesktopDBus *proxy,
    GVariant *arg_environment,
    GCancellable *cancellable,
    GError **error);

void _g_freedesktop_dbus_call_reload_config (
    _GFreedesktopDBus *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _g_freedesktop_dbus_call_reload_config_finish (
    _GFreedesktopDBus *proxy,
    GAsyncResult *res,
    GError **error);

gboolean _g_freedesktop_dbus_call_reload_config_sync (
    _GFreedesktopDBus *proxy,
    GCancellable *cancellable,
    GError **error);

void _g_freedesktop_dbus_call_get_id (
    _GFreedesktopDBus *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _g_freedesktop_dbus_call_get_id_finish (
    _GFreedesktopDBus *proxy,
    gchar **out_unique_id,
    GAsyncResult *res,
    GError **error);

gboolean _g_freedesktop_dbus_call_get_id_sync (
    _GFreedesktopDBus *proxy,
    gchar **out_unique_id,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define _G_TYPE_FREEDESKTOP_DBUS_PROXY (_g_freedesktop_dbus_proxy_get_type ())
#define _G_FREEDESKTOP_DBUS_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), _G_TYPE_FREEDESKTOP_DBUS_PROXY, _GFreedesktopDBusProxy))
#define _G_FREEDESKTOP_DBUS_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), _G_TYPE_FREEDESKTOP_DBUS_PROXY, _GFreedesktopDBusProxyClass))
#define _G_FREEDESKTOP_DBUS_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), _G_TYPE_FREEDESKTOP_DBUS_PROXY, _GFreedesktopDBusProxyClass))
#define _G_IS_FREEDESKTOP_DBUS_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), _G_TYPE_FREEDESKTOP_DBUS_PROXY))
#define _G_IS_FREEDESKTOP_DBUS_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), _G_TYPE_FREEDESKTOP_DBUS_PROXY))

typedef struct __GFreedesktopDBusProxy _GFreedesktopDBusProxy;
typedef struct __GFreedesktopDBusProxyClass _GFreedesktopDBusProxyClass;
typedef struct __GFreedesktopDBusProxyPrivate _GFreedesktopDBusProxyPrivate;

struct __GFreedesktopDBusProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  _GFreedesktopDBusProxyPrivate *priv;
};

struct __GFreedesktopDBusProxyClass
{
  GDBusProxyClass parent_class;
};

GType _g_freedesktop_dbus_proxy_get_type (void) G_GNUC_CONST;

void _g_freedesktop_dbus_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
_GFreedesktopDBus *_g_freedesktop_dbus_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
_GFreedesktopDBus *_g_freedesktop_dbus_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void _g_freedesktop_dbus_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
_GFreedesktopDBus *_g_freedesktop_dbus_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
_GFreedesktopDBus *_g_freedesktop_dbus_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define _G_TYPE_FREEDESKTOP_DBUS_SKELETON (_g_freedesktop_dbus_skeleton_get_type ())
#define _G_FREEDESKTOP_DBUS_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), _G_TYPE_FREEDESKTOP_DBUS_SKELETON, _GFreedesktopDBusSkeleton))
#define _G_FREEDESKTOP_DBUS_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), _G_TYPE_FREEDESKTOP_DBUS_SKELETON, _GFreedesktopDBusSkeletonClass))
#define _G_FREEDESKTOP_DBUS_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), _G_TYPE_FREEDESKTOP_DBUS_SKELETON, _GFreedesktopDBusSkeletonClass))
#define _G_IS_FREEDESKTOP_DBUS_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), _G_TYPE_FREEDESKTOP_DBUS_SKELETON))
#define _G_IS_FREEDESKTOP_DBUS_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), _G_TYPE_FREEDESKTOP_DBUS_SKELETON))

typedef struct __GFreedesktopDBusSkeleton _GFreedesktopDBusSkeleton;
typedef struct __GFreedesktopDBusSkeletonClass _GFreedesktopDBusSkeletonClass;
typedef struct __GFreedesktopDBusSkeletonPrivate _GFreedesktopDBusSkeletonPrivate;

struct __GFreedesktopDBusSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  _GFreedesktopDBusSkeletonPrivate *priv;
};

struct __GFreedesktopDBusSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType _g_freedesktop_dbus_skeleton_get_type (void) G_GNUC_CONST;

_GFreedesktopDBus *_g_freedesktop_dbus_skeleton_new (void);


G_END_DECLS

#endif /* __GDBUS_DAEMON_GENERATED_H__ */
