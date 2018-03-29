/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETBUCKETNOTIFICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_GETBUCKETNOTIFICATIONCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "getbucketnotificationconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketNotificationConfigurationRequest;

class QTAWS_EXPORT GetBucketNotificationConfigurationRequestPrivate : public S3RequestPrivate {

public:
    GetBucketNotificationConfigurationRequestPrivate(const S3::Action action,
                                   GetBucketNotificationConfigurationRequest * const q);
    GetBucketNotificationConfigurationRequestPrivate(const GetBucketNotificationConfigurationRequestPrivate &other,
                                   GetBucketNotificationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketNotificationConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
