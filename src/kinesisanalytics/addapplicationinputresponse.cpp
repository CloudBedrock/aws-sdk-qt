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

#include "addapplicationinputresponse.h"
#include "addapplicationinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationInputResponse
 *
 * \brief The AddApplicationInputResponse class provides an interace for KinesisAnalytics AddApplicationInput responses.
 *
 * \ingroup KinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::addApplicationInput
 */

/*!
 * @brief  Constructs a new AddApplicationInputResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddApplicationInputResponse::AddApplicationInputResponse(
        const AddApplicationInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new AddApplicationInputResponsePrivate(this), parent)
{
    setRequest(new AddApplicationInputRequest(request));
    setReply(reply);
}

const AddApplicationInputRequest * AddApplicationInputResponse::request() const
{
    Q_D(const AddApplicationInputResponse);
    return static_cast<const AddApplicationInputRequest *>(d->request);
}

/*!
 * @brief  Parse a KinesisAnalytics AddApplicationInput response.
 *
 * @param  response  Response to parse.
 */
void AddApplicationInputResponse::parseSuccess(QIODevice &response)
{
    Q_D(AddApplicationInputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AddApplicationInputResponsePrivate
 *
 * \brief Private implementation for AddApplicationInputResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AddApplicationInputResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddApplicationInputResponse instance.
 */
AddApplicationInputResponsePrivate::AddApplicationInputResponsePrivate(
    AddApplicationInputResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * @brief  Parse an KinesisAnalytics AddApplicationInputResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddApplicationInputResponsePrivate::parseAddApplicationInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationInputResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
