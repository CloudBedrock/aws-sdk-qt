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

#ifndef QTAWS_ORGANIZATIONSREQUEST_P_H
#define QTAWS_ORGANIZATIONSREQUEST_P_H

#include "organizations_p.h"
#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class OrganizationsRequest;

class QTAWS_EXPORT OrganizationsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    OrganizationsRequest::Action action; ///< Organizations action to be performed.
    QString apiVersion;        ///< Organizations API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Organizations request (query string) parameters. @todo?

    OrganizationsRequestPrivate(const OrganizationsRequest::Action action, OrganizationsRequest * const q);
    OrganizationsRequestPrivate(const OrganizationsRequestPrivate &other, OrganizationsRequest * const q);

    static QString toString(const OrganizationsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(OrganizationsRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
