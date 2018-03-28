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

#ifndef QTAWS_CLOUDWATCHCLIENTREQUEST_P_H
#define QTAWS_CLOUDWATCHCLIENTREQUEST_P_H

#include "cloudwatch_p.h"
#include "cloudwatchclientrequest.h"

namespace AWS {

namespace CloudWatch {

class CloudWatchClientRequest;

class QTAWS_EXPORT CloudWatchClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    CloudWatchClientRequest::Action action; ///< CloudWatch action to be performed.
    QString apiVersion;        ///< CloudWatch API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudWatch request (query string) parameters. @todo?

    CloudWatchClientRequestPrivate(const CloudWatchClientRequest::Action action, CloudWatchClientRequest * const q);
    CloudWatchClientRequestPrivate(const CloudWatchClientRequestPrivate &other, CloudWatchClientRequest * const q);

    static QString toString(const CloudWatchClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudWatchClientRequest)

};

} // namespace CloudWatch
} // namespace AWS

#endif
