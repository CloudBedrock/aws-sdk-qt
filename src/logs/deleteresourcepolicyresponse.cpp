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

#include "deleteresourcepolicyresponse.h"
#include "deleteresourcepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  DeleteResourcePolicyResponse
 *
 * @brief  Handles CloudWatchLogs DeleteResourcePolicy responses.
 *
 * @see    CloudWatchLogsClient::deleteResourcePolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteResourcePolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DeleteResourcePolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteResourcePolicyRequest(request));
    setReply(reply);
}

const DeleteResourcePolicyRequest * DeleteResourcePolicyResponse::request() const
{
    Q_D(const DeleteResourcePolicyResponse);
    return static_cast<const DeleteResourcePolicyRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs DeleteResourcePolicy response.
 *
 * @param  response  Response to parse.
 */
void DeleteResourcePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteResourcePolicyResponsePrivate
 *
 * @brief  Private implementation for DeleteResourcePolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResourcePolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteResourcePolicyResponse instance.
 */
DeleteResourcePolicyResponsePrivate::DeleteResourcePolicyResponsePrivate(
    DeleteResourcePolicyQueueResponse * const q) : DeleteResourcePolicyPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs DeleteResourcePolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteResourcePolicyResponsePrivate::DeleteResourcePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourcePolicyResponse"));
    /// @todo
}
