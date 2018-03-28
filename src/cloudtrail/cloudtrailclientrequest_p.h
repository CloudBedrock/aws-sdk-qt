/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CLOUDTRAILCLIENTREQUEST_P_H
#define QTAWS_CLOUDTRAILCLIENTREQUEST_P_H

#include "cloudtrail_p.h"
#include "request.h"

namespace AWS {

namespace CloudTrail {

class CloudTrailClientRequest;

class QTAWS_EXPORT CloudTrailClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    CloudTrailClientRequest::Action action; ///< CloudTrail action to be performed.
    QString apiVersion;        ///< CloudTrail API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudTrail request (query string) parameters. @todo?

    CloudTrailClientRequestPrivate(const CloudTrailClientRequest::Action action, CloudTrailClientRequest * const q);
    CloudTrailClientRequestPrivate(const RequestPrivate &other, CloudTrailClientRequest * const q);

    static QString toString(const CloudTrailClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudTrailClientRequest)

};

} // namespace CloudTrail
} // namespace AWS

#endif
