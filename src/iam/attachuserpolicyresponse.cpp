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

#include "attachuserpolicyresponse.h"
#include "attachuserpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  AttachUserPolicyResponse
 *
 * @brief  Handles IAM AttachUserPolicy responses.
 *
 * @see    IAMClient::attachUserPolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachUserPolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new AttachUserPolicyResponsePrivate(this), parent)
{
    setRequest(new AttachUserPolicyRequest(request));
    setReply(reply);
}

const AttachUserPolicyRequest * AttachUserPolicyResponse::request() const
{
    Q_D(const AttachUserPolicyResponse);
    return static_cast<const AttachUserPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM AttachUserPolicy response.
 *
 * @param  response  Response to parse.
 */
void AttachUserPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachUserPolicyResponsePrivate
 *
 * @brief  Private implementation for AttachUserPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachUserPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachUserPolicyResponse instance.
 */
AttachUserPolicyResponsePrivate::AttachUserPolicyResponsePrivate(
    AttachUserPolicyQueueResponse * const q) : AttachUserPolicyPrivate(q)
{

}

/**
 * @brief  Parse an IAM AttachUserPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachUserPolicyResponsePrivate::AttachUserPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachUserPolicyResponse"));
    /// @todo
}
