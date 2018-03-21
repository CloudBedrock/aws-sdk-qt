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

#include "initializeclusterresponse.h"
#include "initializeclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudHSMV2 {

/**
 * @class  InitializeClusterResponse
 *
 * @brief  Handles CloudHSMV2 InitializeCluster responses.
 *
 * @see    CloudHSMV2Client::initializeCluster
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
InitializeClusterResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMV2Response(new InitializeClusterResponsePrivate(this), parent)
{
    setRequest(new InitializeClusterRequest(request));
    setReply(reply);
}

const InitializeClusterRequest * InitializeClusterResponse::request() const
{
    Q_D(const InitializeClusterResponse);
    return static_cast<const InitializeClusterRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSMV2 InitializeCluster response.
 *
 * @param  response  Response to parse.
 */
void InitializeClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  InitializeClusterResponsePrivate
 *
 * @brief  Private implementation for InitializeClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InitializeClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public InitializeClusterResponse instance.
 */
InitializeClusterResponsePrivate::InitializeClusterResponsePrivate(
    InitializeClusterQueueResponse * const q) : InitializeClusterPrivate(q)
{

}

/**
 * @brief  Parse an CloudHSMV2 InitializeClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void InitializeClusterResponsePrivate::InitializeClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InitializeClusterResponse"));
    /// @todo
}
