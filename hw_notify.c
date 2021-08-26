/*
 * build with
 * gcc -o $filename `pkg-config --cflags --libs libnotify` $filename.c
 */

#include <libnotify/notify.h>

int main(void) {
        notify_init ("Hello World!");
        NotifyNotification * Hello = notify_notification_new ("Hello world",
                        "This is an example notification", "dialog-information");
        notify_notification_show (Hello, NULL);
        g_object_unref(G_OBJECT(Hello));
        notify_uninit();
        return 0;
}
