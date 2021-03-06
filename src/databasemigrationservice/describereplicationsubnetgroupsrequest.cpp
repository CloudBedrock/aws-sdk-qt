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

#include "describereplicationsubnetgroupsrequest.h"
#include "describereplicationsubnetgroupsrequest_p.h"
#include "describereplicationsubnetgroupsresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeReplicationSubnetGroupsRequest
 * \brief The DescribeReplicationSubnetGroupsRequest class provides an interface for DatabaseMigrationService DescribeReplicationSubnetGroups requests.
 *
 * \inmodule QtAwsDatabaseMigrationService
 *
 *  <fullname>AWS Database Migration Service</fullname>
 * 
 *  AWS Database Migration Service (AWS DMS) can migrate your data to and from the most widely used commercial and
 *  open-source databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL,
 *  and SAP Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well
 *  as heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about AWS DMS, see the AWS DMS user guide at <a
 *  href="http://docs.aws.amazon.com/dms/latest/userguide/Welcome.html"> What Is AWS Database Migration Service? </a>
 *
 * \sa DatabaseMigrationServiceClient::describeReplicationSubnetGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReplicationSubnetGroupsRequest::DescribeReplicationSubnetGroupsRequest(const DescribeReplicationSubnetGroupsRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeReplicationSubnetGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReplicationSubnetGroupsRequest object.
 */
DescribeReplicationSubnetGroupsRequest::DescribeReplicationSubnetGroupsRequest()
    : DatabaseMigrationServiceRequest(new DescribeReplicationSubnetGroupsRequestPrivate(DatabaseMigrationServiceRequest::DescribeReplicationSubnetGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReplicationSubnetGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReplicationSubnetGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReplicationSubnetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReplicationSubnetGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigrationService::DescribeReplicationSubnetGroupsRequestPrivate
 * \brief The DescribeReplicationSubnetGroupsRequestPrivate class provides private implementation for DescribeReplicationSubnetGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DescribeReplicationSubnetGroupsRequestPrivate object for DatabaseMigrationService \a action,
 * with public implementation \a q.
 */
DescribeReplicationSubnetGroupsRequestPrivate::DescribeReplicationSubnetGroupsRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeReplicationSubnetGroupsRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReplicationSubnetGroupsRequest
 * class' copy constructor.
 */
DescribeReplicationSubnetGroupsRequestPrivate::DescribeReplicationSubnetGroupsRequestPrivate(
    const DescribeReplicationSubnetGroupsRequestPrivate &other, DescribeReplicationSubnetGroupsRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
