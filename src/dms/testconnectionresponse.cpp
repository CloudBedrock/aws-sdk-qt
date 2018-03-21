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

#include "testconnectionresponse.h"
#include "testconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  TestConnectionResponse
 *
 * @brief  Handles DatabaseMigrationService TestConnection responses.
 *
 * @see    DatabaseMigrationServiceClient::testConnection
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestConnectionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new TestConnectionResponsePrivate(this), parent)
{
    setRequest(new TestConnectionRequest(request));
    setReply(reply);
}

const TestConnectionRequest * TestConnectionResponse::request() const
{
    Q_D(const TestConnectionResponse);
    return static_cast<const TestConnectionRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService TestConnection response.
 *
 * @param  response  Response to parse.
 */
void TestConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TestConnectionResponsePrivate
 *
 * @brief  Private implementation for TestConnectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestConnectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TestConnectionResponse instance.
 */
TestConnectionResponsePrivate::TestConnectionResponsePrivate(
    TestConnectionQueueResponse * const q) : TestConnectionPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService TestConnectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TestConnectionResponsePrivate::TestConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestConnectionResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace AWS
