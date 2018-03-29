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

#ifndef QTAWS_MOBILECLIENTREQUEST_P_H
#define QTAWS_MOBILECLIENTREQUEST_P_H

#include "mobile_p.h"
#include "mobileclientrequest.h"

namespace QtAws {
namespace Mobile {

class MobileClientRequest;

class QTAWS_EXPORT MobileClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    MobileClientRequest::Action action; ///< Mobile action to be performed.
    QString apiVersion;        ///< Mobile API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Mobile request (query string) parameters. @todo?

    MobileClientRequestPrivate(const MobileClientRequest::Action action, MobileClientRequest * const q);
    MobileClientRequestPrivate(const MobileClientRequestPrivate &other, MobileClientRequest * const q);

    static QString toString(const MobileClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MobileClientRequest)

};

} // namespace Mobile
} // namespace QtAws

#endif
