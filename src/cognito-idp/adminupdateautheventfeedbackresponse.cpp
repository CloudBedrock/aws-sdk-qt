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

#include "adminupdateautheventfeedbackresponse.h"
#include "adminupdateautheventfeedbackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminUpdateAuthEventFeedbackResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminUpdateAuthEventFeedback responses.
 *
 * @see    CognitoIdentityProviderClient::adminUpdateAuthEventFeedback
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminUpdateAuthEventFeedbackResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminUpdateAuthEventFeedbackResponsePrivate(this), parent)
{
    setRequest(new AdminUpdateAuthEventFeedbackRequest(request));
    setReply(reply);
}

const AdminUpdateAuthEventFeedbackRequest * AdminUpdateAuthEventFeedbackResponse::request() const
{
    Q_D(const AdminUpdateAuthEventFeedbackResponse);
    return static_cast<const AdminUpdateAuthEventFeedbackRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminUpdateAuthEventFeedback response.
 *
 * @param  response  Response to parse.
 */
void AdminUpdateAuthEventFeedbackResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminUpdateAuthEventFeedbackResponsePrivate
 *
 * @brief  Private implementation for AdminUpdateAuthEventFeedbackResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminUpdateAuthEventFeedbackResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminUpdateAuthEventFeedbackResponse instance.
 */
AdminUpdateAuthEventFeedbackResponsePrivate::AdminUpdateAuthEventFeedbackResponsePrivate(
    AdminUpdateAuthEventFeedbackQueueResponse * const q) : AdminUpdateAuthEventFeedbackPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminUpdateAuthEventFeedbackResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminUpdateAuthEventFeedbackResponsePrivate::AdminUpdateAuthEventFeedbackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminUpdateAuthEventFeedbackResponse"));
    /// @todo
}
