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

#include "detachgrouppolicyresponse.h"
#include "detachgrouppolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  DetachGroupPolicyResponse
 *
 * @brief  Handles IAM DetachGroupPolicy responses.
 *
 * @see    IAMClient::detachGroupPolicy
 */

/**
 * @brief  Constructs a new DetachGroupPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachGroupPolicyResponse::DetachGroupPolicyResponse(
        const DetachGroupPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DetachGroupPolicyResponsePrivate(this), parent)
{
    setRequest(new DetachGroupPolicyRequest(request));
    setReply(reply);
}

const DetachGroupPolicyRequest * DetachGroupPolicyResponse::request() const
{
    Q_D(const DetachGroupPolicyResponse);
    return static_cast<const DetachGroupPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DetachGroupPolicy response.
 *
 * @param  response  Response to parse.
 */
void DetachGroupPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachGroupPolicyResponsePrivate
 *
 * @brief  Private implementation for DetachGroupPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachGroupPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachGroupPolicyResponse instance.
 */
DetachGroupPolicyResponsePrivate::DetachGroupPolicyResponsePrivate(
    DetachGroupPolicyQueueResponse * const q) : DetachGroupPolicyPrivate(q)
{

}

/**
 * @brief  Parse an IAM DetachGroupPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachGroupPolicyResponsePrivate::DetachGroupPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachGroupPolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
