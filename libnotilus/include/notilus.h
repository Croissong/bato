/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */

#ifndef NOTILUS_H
#define NOTILUS_H

#include <stdio.h>
#include <libnotify/notify.h>
#include <libnotify/notification.h>

NotifyNotification *init(const char *app_name);
int notify(NotifyNotification *notification, const char *summary, const char *body, const char *icon, NotifyUrgency urgency);
void uninit(NotifyNotification *notification);

#endif //NOTILUS_H
