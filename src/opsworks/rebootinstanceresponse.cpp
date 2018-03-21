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

#include "rebootinstanceresponse.h"
#include "rebootinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  RebootInstanceResponse
 *
 * @brief  Handles OpsWorks RebootInstance responses.
 *
 * @see    OpsWorksClient::rebootInstance
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RebootInstanceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new RebootInstanceResponsePrivate(this), parent)
{
    setRequest(new RebootInstanceRequest(request));
    setReply(reply);
}

const RebootInstanceRequest * RebootInstanceResponse::request() const
{
    Q_D(const RebootInstanceResponse);
    return static_cast<const RebootInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks RebootInstance response.
 *
 * @param  response  Response to parse.
 */
void RebootInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RebootInstanceResponsePrivate
 *
 * @brief  Private implementation for RebootInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RebootInstanceResponse instance.
 */
RebootInstanceResponsePrivate::RebootInstanceResponsePrivate(
    RebootInstanceQueueResponse * const q) : RebootInstancePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks RebootInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RebootInstanceResponsePrivate::RebootInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootInstanceResponse"));
    /// @todo
}
