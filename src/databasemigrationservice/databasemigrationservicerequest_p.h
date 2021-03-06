/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DATABASEMIGRATIONSERVICEREQUEST_P_H
#define QTAWS_DATABASEMIGRATIONSERVICEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "databasemigrationservicerequest.h"

namespace QtAws {
namespace DatabaseMigrationService {

class DatabaseMigrationServiceRequest;

class QTAWS_EXPORT DatabaseMigrationServiceRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DatabaseMigrationServiceRequest::Action action; ///< DatabaseMigrationService action to be performed.
    QString apiVersion;        ///< DatabaseMigrationService API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DatabaseMigrationService request (query string) parameters. @todo?

    DatabaseMigrationServiceRequestPrivate(const DatabaseMigrationServiceRequest::Action action, DatabaseMigrationServiceRequest * const q);
    DatabaseMigrationServiceRequestPrivate(const DatabaseMigrationServiceRequestPrivate &other, DatabaseMigrationServiceRequest * const q);

    static QString toString(const DatabaseMigrationServiceRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DatabaseMigrationServiceRequest)

};

} // namespace DatabaseMigrationService
} // namespace QtAws

#endif
