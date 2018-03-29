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

#include "gethostnamesuggestionresponse.h"
#include "gethostnamesuggestionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  GetHostnameSuggestionResponse
 *
 * @brief  Handles OpsWorks GetHostnameSuggestion responses.
 *
 * @see    OpsWorksClient::getHostnameSuggestion
 */

/**
 * @brief  Constructs a new GetHostnameSuggestionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetHostnameSuggestionResponse::GetHostnameSuggestionResponse(
        const GetHostnameSuggestionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new GetHostnameSuggestionResponsePrivate(this), parent)
{
    setRequest(new GetHostnameSuggestionRequest(request));
    setReply(reply);
}

const GetHostnameSuggestionRequest * GetHostnameSuggestionResponse::request() const
{
    Q_D(const GetHostnameSuggestionResponse);
    return static_cast<const GetHostnameSuggestionRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks GetHostnameSuggestion response.
 *
 * @param  response  Response to parse.
 */
void GetHostnameSuggestionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetHostnameSuggestionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetHostnameSuggestionResponsePrivate
 *
 * @brief  Private implementation for GetHostnameSuggestionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHostnameSuggestionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetHostnameSuggestionResponse instance.
 */
GetHostnameSuggestionResponsePrivate::GetHostnameSuggestionResponsePrivate(
    GetHostnameSuggestionResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks GetHostnameSuggestionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetHostnameSuggestionResponsePrivate::parseGetHostnameSuggestionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHostnameSuggestionResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
