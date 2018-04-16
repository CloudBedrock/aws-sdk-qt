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

#include "deleteendpointresponse.h"
#include "deleteendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DeleteEndpointResponse
 *
 * \brief The DeleteEndpointResponse class encapsulates DatabaseMigrationService DeleteEndpoint responses.
 *
 * \ingroup DatabaseMigrationService
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
 * \sa DatabaseMigrationServiceClient::deleteEndpoint
 */

/*!
 * @brief  Constructs a new DeleteEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEndpointResponse::DeleteEndpointResponse(
        const DeleteEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DeleteEndpointResponsePrivate(this), parent)
{
    setRequest(new DeleteEndpointRequest(request));
    setReply(reply);
}

const DeleteEndpointRequest * DeleteEndpointResponse::request() const
{
    Q_D(const DeleteEndpointResponse);
    return static_cast<const DeleteEndpointRequest *>(d->request);
}

/*!
 * @brief  Parse a DatabaseMigrationService DeleteEndpoint response.
 *
 * @param  response  Response to parse.
 */
void DeleteEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteEndpointResponsePrivate
 *
 * \brief Private implementation for DeleteEndpointResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteEndpointResponse instance.
 */
DeleteEndpointResponsePrivate::DeleteEndpointResponsePrivate(
    DeleteEndpointResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DatabaseMigrationService DeleteEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteEndpointResponsePrivate::parseDeleteEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEndpointResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
