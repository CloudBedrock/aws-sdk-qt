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

#include "deletereplicationtaskresponse.h"
#include "deletereplicationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DeleteReplicationTaskResponse
 * \brief The DeleteReplicationTaskResponse class provides an interace for DatabaseMigrationService DeleteReplicationTask responses.
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
 * \sa DatabaseMigrationServiceClient::deleteReplicationTask
 */

/*!
 * Constructs a DeleteReplicationTaskResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReplicationTaskResponse::DeleteReplicationTaskResponse(
        const DeleteReplicationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DeleteReplicationTaskResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReplicationTaskRequest * DeleteReplicationTaskResponse::request() const
{
    Q_D(const DeleteReplicationTaskResponse);
    return static_cast<const DeleteReplicationTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigrationService DeleteReplicationTask \a response.
 */
void DeleteReplicationTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteReplicationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::DeleteReplicationTaskResponsePrivate
 * \brief The DeleteReplicationTaskResponsePrivate class provides private implementation for DeleteReplicationTaskResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DeleteReplicationTaskResponsePrivate object with public implementation \a q.
 */
DeleteReplicationTaskResponsePrivate::DeleteReplicationTaskResponsePrivate(
    DeleteReplicationTaskResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService DeleteReplicationTask response element from \a xml.
 */
void DeleteReplicationTaskResponsePrivate::parseDeleteReplicationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationTaskResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
