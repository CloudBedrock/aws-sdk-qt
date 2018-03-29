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

#include "deleteratebasedruleresponse.h"
#include "deleteratebasedruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/**
 * @class  DeleteRateBasedRuleResponse
 *
 * @brief  Handles WAF DeleteRateBasedRule responses.
 *
 * @see    WAFClient::deleteRateBasedRule
 */

/**
 * @brief  Constructs a new DeleteRateBasedRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRateBasedRuleResponse::DeleteRateBasedRuleResponse(
        const DeleteRateBasedRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new DeleteRateBasedRuleResponsePrivate(this), parent)
{
    setRequest(new DeleteRateBasedRuleRequest(request));
    setReply(reply);
}

const DeleteRateBasedRuleRequest * DeleteRateBasedRuleResponse::request() const
{
    Q_D(const DeleteRateBasedRuleResponse);
    return static_cast<const DeleteRateBasedRuleRequest *>(d->request);
}

/**
 * @brief  Parse a WAF DeleteRateBasedRule response.
 *
 * @param  response  Response to parse.
 */
void DeleteRateBasedRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteRateBasedRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRateBasedRuleResponsePrivate
 *
 * @brief  Private implementation for DeleteRateBasedRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRateBasedRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRateBasedRuleResponse instance.
 */
DeleteRateBasedRuleResponsePrivate::DeleteRateBasedRuleResponsePrivate(
    DeleteRateBasedRuleResponse * const q) : WAFResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAF DeleteRateBasedRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRateBasedRuleResponsePrivate::parseDeleteRateBasedRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRateBasedRuleResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
