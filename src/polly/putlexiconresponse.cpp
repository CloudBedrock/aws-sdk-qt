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

#include "putlexiconresponse.h"
#include "putlexiconresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::PutLexiconResponse
 *
 * \brief The PutLexiconResponse class encapsulates Polly PutLexicon responses.
 *
 * \ingroup Polly
 *
 *  Amazon Polly is a web service that makes it easy to synthesize speech from
 * 
 *  text>
 * 
 *  The Amazon Polly service provides API operations for synthesizing high-quality speech from plain text and Speech
 *  Synthesis Markup Language (SSML), along with managing pronunciations lexicons that enable you to get the best results
 *  for your application
 *
 * \sa PollyClient::putLexicon
 */

/*!
 * @brief  Constructs a new PutLexiconResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutLexiconResponse::PutLexiconResponse(
        const PutLexiconRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PollyResponse(new PutLexiconResponsePrivate(this), parent)
{
    setRequest(new PutLexiconRequest(request));
    setReply(reply);
}

const PutLexiconRequest * PutLexiconResponse::request() const
{
    Q_D(const PutLexiconResponse);
    return static_cast<const PutLexiconRequest *>(d->request);
}

/*!
 * @brief  Parse a Polly PutLexicon response.
 *
 * @param  response  Response to parse.
 */
void PutLexiconResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutLexiconResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PutLexiconResponsePrivate
 *
 * \brief Private implementation for PutLexiconResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutLexiconResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutLexiconResponse instance.
 */
PutLexiconResponsePrivate::PutLexiconResponsePrivate(
    PutLexiconResponse * const q) : PollyResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Polly PutLexiconResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutLexiconResponsePrivate::parsePutLexiconResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutLexiconResponse"));
    /// @todo
}

} // namespace Polly
} // namespace QtAws
