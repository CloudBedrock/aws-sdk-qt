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

#include "listrulenamesbytargetresponse.h"
#include "listrulenamesbytargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchEvents {

/**
 * @class  ListRuleNamesByTargetResponse
 *
 * @brief  Handles CloudWatchEvents ListRuleNamesByTarget responses.
 *
 * @see    CloudWatchEventsClient::listRuleNamesByTarget
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRuleNamesByTargetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new ListRuleNamesByTargetResponsePrivate(this), parent)
{
    setRequest(new ListRuleNamesByTargetRequest(request));
    setReply(reply);
}

const ListRuleNamesByTargetRequest * ListRuleNamesByTargetResponse::request() const
{
    Q_D(const ListRuleNamesByTargetResponse);
    return static_cast<const ListRuleNamesByTargetRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchEvents ListRuleNamesByTarget response.
 *
 * @param  response  Response to parse.
 */
void ListRuleNamesByTargetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRuleNamesByTargetResponsePrivate
 *
 * @brief  Private implementation for ListRuleNamesByTargetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRuleNamesByTargetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRuleNamesByTargetResponse instance.
 */
ListRuleNamesByTargetResponsePrivate::ListRuleNamesByTargetResponsePrivate(
    ListRuleNamesByTargetQueueResponse * const q) : ListRuleNamesByTargetPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchEvents ListRuleNamesByTargetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRuleNamesByTargetResponsePrivate::ListRuleNamesByTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRuleNamesByTargetResponse"));
    /// @todo
}
