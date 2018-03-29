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

#include "updatesubscriberresponse.h"
#include "updatesubscriberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Budgets {

/**
 * @class  UpdateSubscriberResponse
 *
 * @brief  Handles Budgets UpdateSubscriber responses.
 *
 * @see    BudgetsClient::updateSubscriber
 */

/**
 * @brief  Constructs a new UpdateSubscriberResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSubscriberResponse::UpdateSubscriberResponse(
        const UpdateSubscriberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BudgetsResponse(new UpdateSubscriberResponsePrivate(this), parent)
{
    setRequest(new UpdateSubscriberRequest(request));
    setReply(reply);
}

const UpdateSubscriberRequest * UpdateSubscriberResponse::request() const
{
    Q_D(const UpdateSubscriberResponse);
    return static_cast<const UpdateSubscriberRequest *>(d->request);
}

/**
 * @brief  Parse a Budgets UpdateSubscriber response.
 *
 * @param  response  Response to parse.
 */
void UpdateSubscriberResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateSubscriberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSubscriberResponsePrivate
 *
 * @brief  Private implementation for UpdateSubscriberResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSubscriberResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSubscriberResponse instance.
 */
UpdateSubscriberResponsePrivate::UpdateSubscriberResponsePrivate(
    UpdateSubscriberResponse * const q) : BudgetsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Budgets UpdateSubscriberResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSubscriberResponsePrivate::parseUpdateSubscriberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSubscriberResponse"));
    /// @todo
}

} // namespace Budgets
} // namespace QtAws
