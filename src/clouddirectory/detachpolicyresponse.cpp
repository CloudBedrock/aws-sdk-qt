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

#include "detachpolicyresponse.h"
#include "detachpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  DetachPolicyResponse
 *
 * @brief  Handles CloudDirectory DetachPolicy responses.
 *
 * @see    CloudDirectoryClient::detachPolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachPolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new DetachPolicyResponsePrivate(this), parent)
{
    setRequest(new DetachPolicyRequest(request));
    setReply(reply);
}

const DetachPolicyRequest * DetachPolicyResponse::request() const
{
    Q_D(const DetachPolicyResponse);
    return static_cast<const DetachPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory DetachPolicy response.
 *
 * @param  response  Response to parse.
 */
void DetachPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachPolicyResponsePrivate
 *
 * @brief  Private implementation for DetachPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachPolicyResponse instance.
 */
DetachPolicyResponsePrivate::DetachPolicyResponsePrivate(
    DetachPolicyQueueResponse * const q) : DetachPolicyPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory DetachPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachPolicyResponsePrivate::DetachPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachPolicyResponse"));
    /// @todo
}
